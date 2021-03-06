#pragma once

#include "envoy/config/filter/listener/original_src/v2alpha1/original_src.pb.h"

namespace Envoy {
namespace Extensions {
namespace ListenerFilters {
namespace OriginalSrc {
class Config {
public:
  Config() = default;
  Config(const envoy::config::filter::listener::original_src::v2alpha1::OriginalSrc& config);

  bool usePort() const { return use_port_; }
  uint32_t mark() const { return mark_; }

private:
  bool use_port_ = false;
  uint32_t mark_ = 0;
};
} // namespace OriginalSrc
} // namespace ListenerFilters
} // namespace Extensions
} // namespace Envoy

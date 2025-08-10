#include "webbind/FencedFrameConfig.hpp"

namespace webbind {

FencedFrameConfig FencedFrameConfig::take_ownership(Handle h) noexcept {
        return FencedFrameConfig(h);
    }
FencedFrameConfig FencedFrameConfig::clone() const noexcept { return *this; }
emlite::Val FencedFrameConfig::instance() noexcept { return emlite::Val::global("FencedFrameConfig"); }
FencedFrameConfig::FencedFrameConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FencedFrameConfig::FencedFrameConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}

FencedFrameConfig::FencedFrameConfig(const jsbind::String& url) : emlite::Val(emlite::Val::global("FencedFrameConfig").new_(url)) {}

jsbind::Undefined FencedFrameConfig::setSharedStorageContext(const jsbind::String& contextString) {
    return emlite::Val::call("setSharedStorageContext", contextString).as<jsbind::Undefined>();
}


} // namespace webbind
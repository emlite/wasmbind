#include "webbind/LaunchParams.hpp"
#include "webbind/FileSystemHandle.hpp"

namespace webbind {

LaunchParams LaunchParams::take_ownership(Handle h) noexcept {
        return LaunchParams(h);
    }
LaunchParams LaunchParams::clone() const noexcept { return *this; }
emlite::Val LaunchParams::instance() noexcept { return emlite::Val::global("LaunchParams"); }
LaunchParams::LaunchParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LaunchParams::LaunchParams(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String LaunchParams::targetURL() const {
    return emlite::Val::get("targetURL").as<jsbind::String>();
}

jsbind::TypedArray<FileSystemHandle> LaunchParams::files() const {
    return emlite::Val::get("files").as<jsbind::TypedArray<FileSystemHandle>>();
}


} // namespace webbind
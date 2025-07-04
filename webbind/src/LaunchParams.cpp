#include <webbind/LaunchParams.hpp>
#include <webbind/FileSystemHandle.hpp>


LaunchParams LaunchParams::take_ownership(Handle h) noexcept {
        return LaunchParams(h);
    }
LaunchParams LaunchParams::clone() const noexcept { return *this; }
LaunchParams::LaunchParams(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LaunchParams::LaunchParams(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString LaunchParams::targetURL() const {
    return emlite::Val::get("targetURL").as<jsbind::DOMString>();
}

jsbind::FrozenArray<FileSystemHandle> LaunchParams::files() const {
    return emlite::Val::get("files").as<jsbind::FrozenArray<FileSystemHandle>>();
}


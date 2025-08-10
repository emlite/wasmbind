#include <webbind/MediaSourceHandle.hpp>

namespace webbind {

MediaSourceHandle MediaSourceHandle::take_ownership(Handle h) noexcept {
        return MediaSourceHandle(h);
    }
MediaSourceHandle MediaSourceHandle::clone() const noexcept { return *this; }
emlite::Val MediaSourceHandle::instance() noexcept { return emlite::Val::global("MediaSourceHandle"); }
MediaSourceHandle::MediaSourceHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaSourceHandle::MediaSourceHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind
#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface MediaError
/// [`MediaError`](https://developer.mozilla.org/en-US/docs/Web/API/MediaError)
class MediaError : public emlite::Val {
    explicit MediaError(Handle h) noexcept;
public:
    explicit MediaError(const emlite::Val &val) noexcept;
    static MediaError take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `code` attribute.
    /// [`MediaError.code`](https://developer.mozilla.org/en-US/docs/Web/API/MediaError/code)
    [[nodiscard]] unsigned short code() const;
    /// Getter of the `message` attribute.
    /// [`MediaError.message`](https://developer.mozilla.org/en-US/docs/Web/API/MediaError/message)
    [[nodiscard]] jsbind::String message() const;
};

} // namespace webbind
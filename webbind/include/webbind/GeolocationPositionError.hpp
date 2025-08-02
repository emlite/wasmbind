#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GeolocationPositionError class.
/// [`GeolocationPositionError`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPositionError)
class GeolocationPositionError : public emlite::Val {
    explicit GeolocationPositionError(Handle h) noexcept;

public:
    explicit GeolocationPositionError(const emlite::Val &val) noexcept;
    static GeolocationPositionError take_ownership(Handle h) noexcept;

    [[nodiscard]] GeolocationPositionError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `code` attribute.
    /// [`GeolocationPositionError.code`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPositionError/code)
    [[nodiscard]] unsigned short code() const;
    /// Getter of the `message` attribute.
    /// [`GeolocationPositionError.message`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPositionError/message)
    [[nodiscard]] jsbind::String message() const;
};


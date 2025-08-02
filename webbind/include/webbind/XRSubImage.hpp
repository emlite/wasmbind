#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRViewport;


/// The XRSubImage class.
/// [`XRSubImage`](https://developer.mozilla.org/en-US/docs/Web/API/XRSubImage)
class XRSubImage : public emlite::Val {
    explicit XRSubImage(Handle h) noexcept;

public:
    explicit XRSubImage(const emlite::Val &val) noexcept;
    static XRSubImage take_ownership(Handle h) noexcept;

    [[nodiscard]] XRSubImage clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `viewport` attribute.
    /// [`XRSubImage.viewport`](https://developer.mozilla.org/en-US/docs/Web/API/XRSubImage/viewport)
    [[nodiscard]] XRViewport viewport() const;
};


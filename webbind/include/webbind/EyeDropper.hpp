#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ColorSelectionResult.hpp"
#include "ColorSelectionOptions.hpp"

namespace webbind {

/// Interface EyeDropper
/// [`EyeDropper`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper)
class EyeDropper : public emlite::Val {
    explicit EyeDropper(Handle h) noexcept;
public:
    explicit EyeDropper(const emlite::Val &val) noexcept;
    static EyeDropper take_ownership(Handle h) noexcept;
    [[nodiscard]] EyeDropper clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EyeDropper(..)` constructor, creating a new EyeDropper instance
    EyeDropper();
    /// The open method.
    /// [`EyeDropper.open`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper/open)
    jsbind::Promise<ColorSelectionResult> open();
    /// The open method.
    /// [`EyeDropper.open`](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper/open)
    jsbind::Promise<ColorSelectionResult> open(const ColorSelectionOptions& options);
};

} // namespace webbind
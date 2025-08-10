#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface FontFaceVariationAxis
/// [`FontFaceVariationAxis`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis)
class FontFaceVariationAxis : public emlite::Val {
    explicit FontFaceVariationAxis(Handle h) noexcept;
public:
    explicit FontFaceVariationAxis(const emlite::Val &val) noexcept;
    static FontFaceVariationAxis take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceVariationAxis clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`FontFaceVariationAxis.name`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/name)
    /// [`FontFaceVariationAxis.name`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`FontFaceVariationAxis.axisTag`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/axisTag)
    /// [`FontFaceVariationAxis.axisTag`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/axisTag)
    [[nodiscard]] jsbind::String axisTag() const;
    /// [`FontFaceVariationAxis.minimumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/minimumValue)
    /// [`FontFaceVariationAxis.minimumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/minimumValue)
    [[nodiscard]] double minimumValue() const;
    /// [`FontFaceVariationAxis.maximumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/maximumValue)
    /// [`FontFaceVariationAxis.maximumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/maximumValue)
    [[nodiscard]] double maximumValue() const;
    /// [`FontFaceVariationAxis.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/defaultValue)
    /// [`FontFaceVariationAxis.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/defaultValue)
    [[nodiscard]] double defaultValue() const;
};

} // namespace webbind
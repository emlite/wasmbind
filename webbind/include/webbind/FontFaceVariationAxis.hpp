#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FontFaceVariationAxis class.
/// [`FontFaceVariationAxis`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis)
class FontFaceVariationAxis : public emlite::Val {
    explicit FontFaceVariationAxis(Handle h) noexcept;

public:
    explicit FontFaceVariationAxis(const emlite::Val &val) noexcept;
    static FontFaceVariationAxis take_ownership(Handle h) noexcept;

    [[nodiscard]] FontFaceVariationAxis clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`FontFaceVariationAxis.name`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `axisTag` attribute.
    /// [`FontFaceVariationAxis.axisTag`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/axisTag)
    [[nodiscard]] jsbind::String axisTag() const;
    /// Getter of the `minimumValue` attribute.
    /// [`FontFaceVariationAxis.minimumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/minimumValue)
    [[nodiscard]] double minimumValue() const;
    /// Getter of the `maximumValue` attribute.
    /// [`FontFaceVariationAxis.maximumValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/maximumValue)
    [[nodiscard]] double maximumValue() const;
    /// Getter of the `defaultValue` attribute.
    /// [`FontFaceVariationAxis.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceVariationAxis/defaultValue)
    [[nodiscard]] double defaultValue() const;
};


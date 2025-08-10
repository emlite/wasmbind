#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSColorValue.hpp"

namespace webbind {

/// Interface CSSColor
/// [`CSSColor`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor)
class CSSColor : public CSSColorValue {
    explicit CSSColor(Handle h) noexcept;
public:
    explicit CSSColor(const emlite::Val &val) noexcept;
    static CSSColor take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSColor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSColor(..)` constructor, creating a new CSSColor instance
    CSSColor(const jsbind::Any& colorSpace, const jsbind::TypedArray<jsbind::Any>& channels);
    /// The `new CSSColor(..)` constructor, creating a new CSSColor instance
    CSSColor(const jsbind::Any& colorSpace, const jsbind::TypedArray<jsbind::Any>& channels, const jsbind::Any& alpha);
    /// [`CSSColor.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/colorSpace)
    /// [`CSSColor.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/colorSpace)
    [[nodiscard]] jsbind::Any colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    /// [`CSSColor.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/colorSpace)
    void colorSpace(const jsbind::Any& value);
    /// [`CSSColor.channels`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/channels)
    /// [`CSSColor.channels`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/channels)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> channels() const;
    /// Setter of the `channels` attribute.
    /// [`CSSColor.channels`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/channels)
    void channels(const jsbind::TypedArray<jsbind::Any>& value);
    /// [`CSSColor.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/alpha)
    /// [`CSSColor.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/alpha)
    [[nodiscard]] jsbind::Any alpha() const;
    /// Setter of the `alpha` attribute.
    /// [`CSSColor.alpha`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColor/alpha)
    void alpha(const jsbind::Any& value);
};

} // namespace webbind
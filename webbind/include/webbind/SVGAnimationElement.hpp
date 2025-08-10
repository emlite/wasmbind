#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGStringList;

/// Interface SVGAnimationElement
/// [`SVGAnimationElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement)
class SVGAnimationElement : public SVGElement {
    explicit SVGAnimationElement(Handle h) noexcept;
public:
    explicit SVGAnimationElement(const emlite::Val &val) noexcept;
    static SVGAnimationElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAnimationElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `targetElement` attribute.
    /// [`SVGAnimationElement.targetElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/targetElement)
    [[nodiscard]] SVGElement targetElement() const;
    /// Getter of the `onbegin` attribute.
    /// [`SVGAnimationElement.onbegin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onbegin)
    [[nodiscard]] jsbind::Any onbegin() const;
    /// Setter of the `onbegin` attribute.
    /// [`SVGAnimationElement.onbegin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onbegin)
    void onbegin(const jsbind::Any& value);
    /// Getter of the `onend` attribute.
    /// [`SVGAnimationElement.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onend)
    [[nodiscard]] jsbind::Any onend() const;
    /// Setter of the `onend` attribute.
    /// [`SVGAnimationElement.onend`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onend)
    void onend(const jsbind::Any& value);
    /// Getter of the `onrepeat` attribute.
    /// [`SVGAnimationElement.onrepeat`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onrepeat)
    [[nodiscard]] jsbind::Any onrepeat() const;
    /// Setter of the `onrepeat` attribute.
    /// [`SVGAnimationElement.onrepeat`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/onrepeat)
    void onrepeat(const jsbind::Any& value);
    /// The getStartTime method.
    /// [`SVGAnimationElement.getStartTime`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/getStartTime)
    float getStartTime();
    /// The getCurrentTime method.
    /// [`SVGAnimationElement.getCurrentTime`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/getCurrentTime)
    float getCurrentTime();
    /// The getSimpleDuration method.
    /// [`SVGAnimationElement.getSimpleDuration`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/getSimpleDuration)
    float getSimpleDuration();
    /// The beginElement method.
    /// [`SVGAnimationElement.beginElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/beginElement)
    jsbind::Undefined beginElement();
    /// The beginElementAt method.
    /// [`SVGAnimationElement.beginElementAt`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/beginElementAt)
    jsbind::Undefined beginElementAt(float offset);
    /// The endElement method.
    /// [`SVGAnimationElement.endElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/endElement)
    jsbind::Undefined endElement();
    /// The endElementAt method.
    /// [`SVGAnimationElement.endElementAt`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/endElementAt)
    jsbind::Undefined endElementAt(float offset);
    /// Getter of the `requiredExtensions` attribute.
    /// [`SVGAnimationElement.requiredExtensions`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/requiredExtensions)
    [[nodiscard]] SVGStringList requiredExtensions() const;
    /// Getter of the `systemLanguage` attribute.
    /// [`SVGAnimationElement.systemLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAnimationElement/systemLanguage)
    [[nodiscard]] SVGStringList systemLanguage() const;
};

} // namespace webbind
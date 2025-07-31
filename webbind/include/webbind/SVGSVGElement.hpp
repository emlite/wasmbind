#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class DOMPointReadOnly;
class NodeList;
class DOMRectReadOnly;
class SVGElement;
class SVGNumber;
class SVGLength;
class SVGAngle;
class DOMPoint;
class DOMMatrix;
class DOMRect;
class SVGTransform;
class DOMMatrix2DInit;
class Element;
class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


class DOMMatrix2DInit : public emlite::Val {
  explicit DOMMatrix2DInit(Handle h) noexcept;
public:
    static DOMMatrix2DInit take_ownership(Handle h) noexcept;
    explicit DOMMatrix2DInit(const emlite::Val &val) noexcept;
    DOMMatrix2DInit() noexcept;
    [[nodiscard]] DOMMatrix2DInit clone() const noexcept;
    [[nodiscard]] double a() const;
    void a(double value);
    [[nodiscard]] double b() const;
    void b(double value);
    [[nodiscard]] double c() const;
    void c(double value);
    [[nodiscard]] double d() const;
    void d(double value);
    [[nodiscard]] double e() const;
    void e(double value);
    [[nodiscard]] double f() const;
    void f(double value);
    [[nodiscard]] double m11() const;
    void m11(double value);
    [[nodiscard]] double m12() const;
    void m12(double value);
    [[nodiscard]] double m21() const;
    void m21(double value);
    [[nodiscard]] double m22() const;
    void m22(double value);
    [[nodiscard]] double m41() const;
    void m41(double value);
    [[nodiscard]] double m42() const;
    void m42(double value);
};

/// The SVGSVGElement class.
/// [`SVGSVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement)
class SVGSVGElement : public SVGGraphicsElement {
    explicit SVGSVGElement(Handle h) noexcept;

public:
    explicit SVGSVGElement(const emlite::Val &val) noexcept;
    static SVGSVGElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGSVGElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGSVGElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGSVGElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGSVGElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGSVGElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `currentScale` attribute.
    /// [`SVGSVGElement.currentScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/currentScale)
    [[nodiscard]] float currentScale() const;
    /// Setter of the `currentScale` attribute.
    /// [`SVGSVGElement.currentScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/currentScale)
    void currentScale(float value);
    /// Getter of the `currentTranslate` attribute.
    /// [`SVGSVGElement.currentTranslate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/currentTranslate)
    [[nodiscard]] DOMPointReadOnly currentTranslate() const;
    /// The getIntersectionList method.
    /// [`SVGSVGElement.getIntersectionList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/getIntersectionList)
    NodeList getIntersectionList(const DOMRectReadOnly& rect, const SVGElement& referenceElement);
    /// The getEnclosureList method.
    /// [`SVGSVGElement.getEnclosureList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/getEnclosureList)
    NodeList getEnclosureList(const DOMRectReadOnly& rect, const SVGElement& referenceElement);
    /// The checkIntersection method.
    /// [`SVGSVGElement.checkIntersection`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/checkIntersection)
    bool checkIntersection(const SVGElement& element, const DOMRectReadOnly& rect);
    /// The checkEnclosure method.
    /// [`SVGSVGElement.checkEnclosure`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/checkEnclosure)
    bool checkEnclosure(const SVGElement& element, const DOMRectReadOnly& rect);
    /// The deselectAll method.
    /// [`SVGSVGElement.deselectAll`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/deselectAll)
    jsbind::Undefined deselectAll();
    /// The createSVGNumber method.
    /// [`SVGSVGElement.createSVGNumber`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGNumber)
    SVGNumber createSVGNumber();
    /// The createSVGLength method.
    /// [`SVGSVGElement.createSVGLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGLength)
    SVGLength createSVGLength();
    /// The createSVGAngle method.
    /// [`SVGSVGElement.createSVGAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGAngle)
    SVGAngle createSVGAngle();
    /// The createSVGPoint method.
    /// [`SVGSVGElement.createSVGPoint`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGPoint)
    DOMPoint createSVGPoint();
    /// The createSVGMatrix method.
    /// [`SVGSVGElement.createSVGMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGMatrix)
    DOMMatrix createSVGMatrix();
    /// The createSVGRect method.
    /// [`SVGSVGElement.createSVGRect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGRect)
    DOMRect createSVGRect();
    /// The createSVGTransform method.
    /// [`SVGSVGElement.createSVGTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGTransform)
    SVGTransform createSVGTransform();
    /// The createSVGTransformFromMatrix method.
    /// [`SVGSVGElement.createSVGTransformFromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGTransformFromMatrix)
    SVGTransform createSVGTransformFromMatrix();
    /// The createSVGTransformFromMatrix method.
    /// [`SVGSVGElement.createSVGTransformFromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/createSVGTransformFromMatrix)
    SVGTransform createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix);
    /// The getElementById method.
    /// [`SVGSVGElement.getElementById`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/getElementById)
    Element getElementById(const jsbind::String& elementId);
    /// The suspendRedraw method.
    /// [`SVGSVGElement.suspendRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/suspendRedraw)
    unsigned long suspendRedraw(unsigned long maxWaitMilliseconds);
    /// The unsuspendRedraw method.
    /// [`SVGSVGElement.unsuspendRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/unsuspendRedraw)
    jsbind::Undefined unsuspendRedraw(unsigned long suspendHandleID);
    /// The unsuspendRedrawAll method.
    /// [`SVGSVGElement.unsuspendRedrawAll`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/unsuspendRedrawAll)
    jsbind::Undefined unsuspendRedrawAll();
    /// The forceRedraw method.
    /// [`SVGSVGElement.forceRedraw`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/forceRedraw)
    jsbind::Undefined forceRedraw();
    /// The pauseAnimations method.
    /// [`SVGSVGElement.pauseAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/pauseAnimations)
    jsbind::Undefined pauseAnimations();
    /// The unpauseAnimations method.
    /// [`SVGSVGElement.unpauseAnimations`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/unpauseAnimations)
    jsbind::Undefined unpauseAnimations();
    /// The animationsPaused method.
    /// [`SVGSVGElement.animationsPaused`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/animationsPaused)
    bool animationsPaused();
    /// The getCurrentTime method.
    /// [`SVGSVGElement.getCurrentTime`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/getCurrentTime)
    float getCurrentTime();
    /// The setCurrentTime method.
    /// [`SVGSVGElement.setCurrentTime`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/setCurrentTime)
    jsbind::Undefined setCurrentTime(float seconds);
    /// Getter of the `viewBox` attribute.
    /// [`SVGSVGElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// Getter of the `preserveAspectRatio` attribute.
    /// [`SVGSVGElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    /// Getter of the `onportalactivate` attribute.
    /// [`SVGSVGElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/onportalactivate)
    [[nodiscard]] jsbind::Any onportalactivate() const;
    /// Setter of the `onportalactivate` attribute.
    /// [`SVGSVGElement.onportalactivate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGSVGElement/onportalactivate)
    void onportalactivate(const jsbind::Any& value);
};


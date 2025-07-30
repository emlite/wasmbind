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
    DOMMatrix2DInit clone() const noexcept;
    double a() const;
    void a(double value);
    double b() const;
    void b(double value);
    double c() const;
    void c(double value);
    double d() const;
    void d(double value);
    double e() const;
    void e(double value);
    double f() const;
    void f(double value);
    double m11() const;
    void m11(double value);
    double m12() const;
    void m12(double value);
    double m21() const;
    void m21(double value);
    double m22() const;
    void m22(double value);
    double m41() const;
    void m41(double value);
    double m42() const;
    void m42(double value);
};

class SVGSVGElement : public SVGGraphicsElement {
    explicit SVGSVGElement(Handle h) noexcept;

public:
    explicit SVGSVGElement(const emlite::Val &val) noexcept;
    static SVGSVGElement take_ownership(Handle h) noexcept;

    SVGSVGElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    float currentScale() const;
    void currentScale(float value);
    DOMPointReadOnly currentTranslate() const;
    NodeList getIntersectionList(const DOMRectReadOnly& rect, const SVGElement& referenceElement);
    NodeList getEnclosureList(const DOMRectReadOnly& rect, const SVGElement& referenceElement);
    bool checkIntersection(const SVGElement& element, const DOMRectReadOnly& rect);
    bool checkEnclosure(const SVGElement& element, const DOMRectReadOnly& rect);
    jsbind::Undefined deselectAll();
    SVGNumber createSVGNumber();
    SVGLength createSVGLength();
    SVGAngle createSVGAngle();
    DOMPoint createSVGPoint();
    DOMMatrix createSVGMatrix();
    DOMRect createSVGRect();
    SVGTransform createSVGTransform();
    SVGTransform createSVGTransformFromMatrix();
    SVGTransform createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix);
    Element getElementById(const jsbind::String& elementId);
    unsigned long suspendRedraw(unsigned long maxWaitMilliseconds);
    jsbind::Undefined unsuspendRedraw(unsigned long suspendHandleID);
    jsbind::Undefined unsuspendRedrawAll();
    jsbind::Undefined forceRedraw();
    jsbind::Undefined pauseAnimations();
    jsbind::Undefined unpauseAnimations();
    bool animationsPaused();
    float getCurrentTime();
    jsbind::Undefined setCurrentTime(float seconds);
    SVGAnimatedRect viewBox() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    jsbind::Any onportalactivate() const;
    void onportalactivate(const jsbind::Any& value);
};


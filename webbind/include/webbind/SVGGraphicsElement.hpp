#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedTransformList;
class DOMRect;
class SVGBoundingBoxOptions;
class DOMMatrix;
class SVGStringList;


class SVGBoundingBoxOptions : public emlite::Val {
  explicit SVGBoundingBoxOptions(Handle h) noexcept;
public:
    static SVGBoundingBoxOptions take_ownership(Handle h) noexcept;
    explicit SVGBoundingBoxOptions(const emlite::Val &val) noexcept;
    SVGBoundingBoxOptions() noexcept;
    SVGBoundingBoxOptions clone() const noexcept;
    bool fill() const;
    void fill(bool value);
    bool stroke() const;
    void stroke(bool value);
    bool markers() const;
    void markers(bool value);
    bool clipped() const;
    void clipped(bool value);
};

class SVGGraphicsElement : public SVGElement {
    explicit SVGGraphicsElement(Handle h) noexcept;

public:
    explicit SVGGraphicsElement(const emlite::Val &val) noexcept;
    static SVGGraphicsElement take_ownership(Handle h) noexcept;

    SVGGraphicsElement clone() const noexcept;
    SVGAnimatedTransformList transform() const;
    DOMRect getBBox(const SVGBoundingBoxOptions& options);
    DOMMatrix getCTM();
    DOMMatrix getScreenCTM();
    SVGStringList requiredExtensions() const;
    SVGStringList systemLanguage() const;
};


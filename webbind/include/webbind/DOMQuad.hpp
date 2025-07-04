#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMRectReadOnly.hpp"
#include "enums.hpp"

class DOMQuad;
class DOMPoint;
class DOMRect;
class DOMQuadInit;
class DOMPointInit;


class DOMQuad : public emlite::Val {
    explicit DOMQuad(Handle h) noexcept;

public:
    explicit DOMQuad(const emlite::Val &val) noexcept;
    static DOMQuad take_ownership(Handle h) noexcept;

    DOMQuad clone() const noexcept;
    DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2, const DOMPointInit& p3, const DOMPointInit& p4);
    static DOMQuad fromRect(const DOMRectInit& other);
    static DOMQuad fromQuad(const DOMQuadInit& other);
    DOMPoint p1() const;
    DOMPoint p2() const;
    DOMPoint p3() const;
    DOMPoint p4() const;
    DOMRect getBounds();
    jsbind::Object toJSON();
};


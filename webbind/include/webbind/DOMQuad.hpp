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


/// The DOMQuad class.
/// [`DOMQuad`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad)
class DOMQuad : public emlite::Val {
    explicit DOMQuad(Handle h) noexcept;

public:
    explicit DOMQuad(const emlite::Val &val) noexcept;
    static DOMQuad take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMQuad clone() const noexcept;
    /// The `new DOMQuad(..)` constructor, creating a new DOMQuad instance
    DOMQuad();
    /// The `new DOMQuad(..)` constructor, creating a new DOMQuad instance
    DOMQuad(const DOMPointInit& p1);
    /// The `new DOMQuad(..)` constructor, creating a new DOMQuad instance
    DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2);
    /// The `new DOMQuad(..)` constructor, creating a new DOMQuad instance
    DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2, const DOMPointInit& p3);
    /// The `new DOMQuad(..)` constructor, creating a new DOMQuad instance
    DOMQuad(const DOMPointInit& p1, const DOMPointInit& p2, const DOMPointInit& p3, const DOMPointInit& p4);
    /// The fromRect method.
    /// [`DOMQuad.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/fromRect)
    static DOMQuad fromRect();
    /// The fromRect method.
    /// [`DOMQuad.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/fromRect)
    static DOMQuad fromRect(const DOMRectInit& other);
    /// The fromQuad method.
    /// [`DOMQuad.fromQuad`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/fromQuad)
    static DOMQuad fromQuad();
    /// The fromQuad method.
    /// [`DOMQuad.fromQuad`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/fromQuad)
    static DOMQuad fromQuad(const DOMQuadInit& other);
    /// Getter of the `p1` attribute.
    /// [`DOMQuad.p1`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/p1)
    [[nodiscard]] DOMPoint p1() const;
    /// Getter of the `p2` attribute.
    /// [`DOMQuad.p2`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/p2)
    [[nodiscard]] DOMPoint p2() const;
    /// Getter of the `p3` attribute.
    /// [`DOMQuad.p3`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/p3)
    [[nodiscard]] DOMPoint p3() const;
    /// Getter of the `p4` attribute.
    /// [`DOMQuad.p4`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/p4)
    [[nodiscard]] DOMPoint p4() const;
    /// The getBounds method.
    /// [`DOMQuad.getBounds`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/getBounds)
    DOMRect getBounds();
    /// The toJSON method.
    /// [`DOMQuad.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DOMQuad/toJSON)
    jsbind::Object toJSON();
};


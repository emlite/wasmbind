#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUQuerySet class.
/// [`GPUQuerySet`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet)
class GPUQuerySet : public emlite::Val {
    explicit GPUQuerySet(Handle h) noexcept;

public:
    explicit GPUQuerySet(const emlite::Val &val) noexcept;
    static GPUQuerySet take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUQuerySet clone() const noexcept;
    /// The destroy method.
    /// [`GPUQuerySet.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet/destroy)
    jsbind::Undefined destroy();
    /// Getter of the `type` attribute.
    /// [`GPUQuerySet.type`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet/type)
    [[nodiscard]] GPUQueryType type() const;
    /// Getter of the `count` attribute.
    /// [`GPUQuerySet.count`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet/count)
    [[nodiscard]] jsbind::Any count() const;
    /// Getter of the `label` attribute.
    /// [`GPUQuerySet.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUQuerySet.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet/label)
    void label(const jsbind::String& value);
};


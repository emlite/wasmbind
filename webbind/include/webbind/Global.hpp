#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The Global class.
/// [`Global`](https://developer.mozilla.org/en-US/docs/Web/API/Global)
class Global : public emlite::Val {
    explicit Global(Handle h) noexcept;

public:
    explicit Global(const emlite::Val &val) noexcept;
    static Global take_ownership(Handle h) noexcept;

    [[nodiscard]] Global clone() const noexcept;
    /// The `new Global(..)` constructor, creating a new Global instance
    Global(const jsbind::Any& descriptor);
    /// The `new Global(..)` constructor, creating a new Global instance
    Global(const jsbind::Any& descriptor, const jsbind::Any& v);
    /// The valueOf method.
    /// [`Global.valueOf`](https://developer.mozilla.org/en-US/docs/Web/API/Global/valueOf)
    jsbind::Any valueOf();
    /// Getter of the `value` attribute.
    /// [`Global.value`](https://developer.mozilla.org/en-US/docs/Web/API/Global/value)
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    /// [`Global.value`](https://developer.mozilla.org/en-US/docs/Web/API/Global/value)
    void value(const jsbind::Any& value);
};


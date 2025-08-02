#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The Table class.
/// [`Table`](https://developer.mozilla.org/en-US/docs/Web/API/Table)
class Table : public emlite::Val {
    explicit Table(Handle h) noexcept;

public:
    explicit Table(const emlite::Val &val) noexcept;
    static Table take_ownership(Handle h) noexcept;

    [[nodiscard]] Table clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Table(..)` constructor, creating a new Table instance
    Table(const jsbind::Any& descriptor);
    /// The `new Table(..)` constructor, creating a new Table instance
    Table(const jsbind::Any& descriptor, const jsbind::Any& value);
    /// The grow method.
    /// [`Table.grow`](https://developer.mozilla.org/en-US/docs/Web/API/Table/grow)
    unsigned long grow(unsigned long delta);
    /// The grow method.
    /// [`Table.grow`](https://developer.mozilla.org/en-US/docs/Web/API/Table/grow)
    unsigned long grow(unsigned long delta, const jsbind::Any& value);
    /// The get method.
    /// [`Table.get`](https://developer.mozilla.org/en-US/docs/Web/API/Table/get)
    jsbind::Any get(unsigned long index);
    /// The set method.
    /// [`Table.set`](https://developer.mozilla.org/en-US/docs/Web/API/Table/set)
    jsbind::Undefined set(unsigned long index);
    /// The set method.
    /// [`Table.set`](https://developer.mozilla.org/en-US/docs/Web/API/Table/set)
    jsbind::Undefined set(unsigned long index, const jsbind::Any& value);
    /// Getter of the `length` attribute.
    /// [`Table.length`](https://developer.mozilla.org/en-US/docs/Web/API/Table/length)
    [[nodiscard]] unsigned long length() const;
};


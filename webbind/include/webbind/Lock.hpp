#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The Lock class.
/// [`Lock`](https://developer.mozilla.org/en-US/docs/Web/API/Lock)
class Lock : public emlite::Val {
    explicit Lock(Handle h) noexcept;

public:
    explicit Lock(const emlite::Val &val) noexcept;
    static Lock take_ownership(Handle h) noexcept;

    [[nodiscard]] Lock clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`Lock.name`](https://developer.mozilla.org/en-US/docs/Web/API/Lock/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `mode` attribute.
    /// [`Lock.mode`](https://developer.mozilla.org/en-US/docs/Web/API/Lock/mode)
    [[nodiscard]] LockMode mode() const;
};


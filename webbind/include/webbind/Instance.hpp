#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Module;


/// The Instance class.
/// [`Instance`](https://developer.mozilla.org/en-US/docs/Web/API/Instance)
class Instance : public emlite::Val {
    explicit Instance(Handle h) noexcept;

public:
    explicit Instance(const emlite::Val &val) noexcept;
    static Instance take_ownership(Handle h) noexcept;

    [[nodiscard]] Instance clone() const noexcept;
    /// The `new Instance(..)` constructor, creating a new Instance instance
    Instance(const Module& module_);
    /// The `new Instance(..)` constructor, creating a new Instance instance
    Instance(const Module& module_, const jsbind::Object& importObject);
    /// Getter of the `exports` attribute.
    /// [`Instance.exports`](https://developer.mozilla.org/en-US/docs/Web/API/Instance/exports)
    [[nodiscard]] jsbind::Object exports() const;
};


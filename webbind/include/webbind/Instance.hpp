#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Module;

/// Interface Instance
/// [`Instance`](https://developer.mozilla.org/en-US/docs/Web/API/Instance)
class Instance : public emlite::Val {
    explicit Instance(Handle h) noexcept;
public:
    explicit Instance(const emlite::Val &val) noexcept;
    static Instance take_ownership(Handle h) noexcept;
    [[nodiscard]] Instance clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Instance(..)` constructor, creating a new Instance instance
    Instance(const Module& module_);
    /// The `new Instance(..)` constructor, creating a new Instance instance
    Instance(const Module& module_, const jsbind::Object& importObject);
    /// [`Instance.exports`](https://developer.mozilla.org/en-US/docs/Web/API/Instance/exports)
    /// [`Instance.exports`](https://developer.mozilla.org/en-US/docs/Web/API/Instance/exports)
    [[nodiscard]] jsbind::Object exports() const;
};

} // namespace webbind
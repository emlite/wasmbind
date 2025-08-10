#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class WorkletOptions;

/// Interface Worklet
/// [`Worklet`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet)
class Worklet : public emlite::Val {
    explicit Worklet(Handle h) noexcept;
public:
    explicit Worklet(const emlite::Val &val) noexcept;
    static Worklet take_ownership(Handle h) noexcept;
    [[nodiscard]] Worklet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The addModule method.
    /// [`Worklet.addModule`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet/addModule)
    jsbind::Promise<jsbind::Undefined> addModule(const jsbind::String& moduleURL);
    /// The addModule method.
    /// [`Worklet.addModule`](https://developer.mozilla.org/en-US/docs/Web/API/Worklet/addModule)
    jsbind::Promise<jsbind::Undefined> addModule(const jsbind::String& moduleURL, const WorkletOptions& options);
};

} // namespace webbind
#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ViewTransitionTypeSet;

/// Interface ViewTransition
/// [`ViewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition)
class ViewTransition : public emlite::Val {
    explicit ViewTransition(Handle h) noexcept;
public:
    explicit ViewTransition(const emlite::Val &val) noexcept;
    static ViewTransition take_ownership(Handle h) noexcept;
    [[nodiscard]] ViewTransition clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `updateCallbackDone` attribute.
    /// [`ViewTransition.updateCallbackDone`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/updateCallbackDone)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> updateCallbackDone() const;
    /// Getter of the `ready` attribute.
    /// [`ViewTransition.ready`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/ready)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> ready() const;
    /// Getter of the `finished` attribute.
    /// [`ViewTransition.finished`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/finished)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> finished() const;
    /// The skipTransition method.
    /// [`ViewTransition.skipTransition`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/skipTransition)
    jsbind::Undefined skipTransition();
    /// Getter of the `types` attribute.
    /// [`ViewTransition.types`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/types)
    [[nodiscard]] ViewTransitionTypeSet types() const;
    /// Setter of the `types` attribute.
    /// [`ViewTransition.types`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransition/types)
    void types(const ViewTransitionTypeSet& value);
};

} // namespace webbind
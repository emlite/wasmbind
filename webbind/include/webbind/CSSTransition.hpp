#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


/// The CSSTransition class.
/// [`CSSTransition`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransition)
class CSSTransition : public Animation {
    explicit CSSTransition(Handle h) noexcept;

public:
    explicit CSSTransition(const emlite::Val &val) noexcept;
    static CSSTransition take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSTransition clone() const noexcept;
    /// Getter of the `transitionProperty` attribute.
    /// [`CSSTransition.transitionProperty`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransition/transitionProperty)
    [[nodiscard]] jsbind::String transitionProperty() const;
};


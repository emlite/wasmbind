#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The UserActivation class.
/// [`UserActivation`](https://developer.mozilla.org/en-US/docs/Web/API/UserActivation)
class UserActivation : public emlite::Val {
    explicit UserActivation(Handle h) noexcept;

public:
    explicit UserActivation(const emlite::Val &val) noexcept;
    static UserActivation take_ownership(Handle h) noexcept;

    [[nodiscard]] UserActivation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `hasBeenActive` attribute.
    /// [`UserActivation.hasBeenActive`](https://developer.mozilla.org/en-US/docs/Web/API/UserActivation/hasBeenActive)
    [[nodiscard]] bool hasBeenActive() const;
    /// Getter of the `isActive` attribute.
    /// [`UserActivation.isActive`](https://developer.mozilla.org/en-US/docs/Web/API/UserActivation/isActive)
    [[nodiscard]] bool isActive() const;
};


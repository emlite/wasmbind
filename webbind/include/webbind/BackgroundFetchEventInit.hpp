#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class BackgroundFetchRegistration;

/// Dictionary type BackgroundFetchEventInit
class BackgroundFetchEventInit : public ExtendableEventInit {
  explicit BackgroundFetchEventInit(Handle h) noexcept;
public:
    static BackgroundFetchEventInit take_ownership(Handle h) noexcept;
    explicit BackgroundFetchEventInit(const emlite::Val &val) noexcept;
    BackgroundFetchEventInit() noexcept;
    [[nodiscard]] BackgroundFetchEventInit clone() const noexcept;
    /// Getter of the `registration` attribute.
    [[nodiscard]] BackgroundFetchRegistration registration() const;
    /// Setter of the `registration` attribute.
    void registration(const BackgroundFetchRegistration& value);
};

} // namespace webbind
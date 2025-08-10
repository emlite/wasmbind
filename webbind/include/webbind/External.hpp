#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface External
/// [`External`](https://developer.mozilla.org/en-US/docs/Web/API/External)
class External : public emlite::Val {
    explicit External(Handle h) noexcept;
public:
    explicit External(const emlite::Val &val) noexcept;
    static External take_ownership(Handle h) noexcept;
    [[nodiscard]] External clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The AddSearchProvider method.
    /// [`External.AddSearchProvider`](https://developer.mozilla.org/en-US/docs/Web/API/External/AddSearchProvider)
    jsbind::Undefined AddSearchProvider();
    /// The IsSearchProviderInstalled method.
    /// [`External.IsSearchProviderInstalled`](https://developer.mozilla.org/en-US/docs/Web/API/External/IsSearchProviderInstalled)
    jsbind::Undefined IsSearchProviderInstalled();
};

} // namespace webbind
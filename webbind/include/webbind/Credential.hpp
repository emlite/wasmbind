#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface Credential
/// [`Credential`](https://developer.mozilla.org/en-US/docs/Web/API/Credential)
class Credential : public emlite::Val {
    explicit Credential(Handle h) noexcept;
public:
    explicit Credential(const emlite::Val &val) noexcept;
    static Credential take_ownership(Handle h) noexcept;
    [[nodiscard]] Credential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Credential.id`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/id)
    /// [`Credential.id`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`Credential.type`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/type)
    /// [`Credential.type`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/type)
    [[nodiscard]] jsbind::String type() const;
    /// The isConditionalMediationAvailable method.
    /// [`Credential.isConditionalMediationAvailable`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/isConditionalMediationAvailable)
    static jsbind::Promise<bool> isConditionalMediationAvailable();
    /// The willRequestConditionalCreation method.
    /// [`Credential.willRequestConditionalCreation`](https://developer.mozilla.org/en-US/docs/Web/API/Credential/willRequestConditionalCreation)
    static jsbind::Promise<jsbind::Undefined> willRequestConditionalCreation();
};

} // namespace webbind
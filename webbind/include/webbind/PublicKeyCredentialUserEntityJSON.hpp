#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialUserEntityJSON
/// [`PublicKeyCredentialUserEntityJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialUserEntityJSON)
class PublicKeyCredentialUserEntityJSON : public emlite::Val {
  explicit PublicKeyCredentialUserEntityJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialUserEntityJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialUserEntityJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialUserEntityJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialUserEntityJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any id() const;
    void id(const jsbind::Any& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String displayName() const;
    void displayName(const jsbind::String& value);
};

} // namespace webbind
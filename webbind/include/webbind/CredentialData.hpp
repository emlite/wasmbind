#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CredentialData
/// [`CredentialData`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialData)
class CredentialData : public emlite::Val {
  explicit CredentialData(Handle h) noexcept;
public:
    static CredentialData take_ownership(Handle h) noexcept;
    explicit CredentialData(const emlite::Val &val) noexcept;
    CredentialData() noexcept;
    [[nodiscard]] CredentialData clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
};

} // namespace webbind
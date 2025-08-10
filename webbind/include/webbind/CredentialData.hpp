#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CredentialData
class CredentialData : public emlite::Val {
  explicit CredentialData(Handle h) noexcept;
public:
    static CredentialData take_ownership(Handle h) noexcept;
    explicit CredentialData(const emlite::Val &val) noexcept;
    CredentialData() noexcept;
    [[nodiscard]] CredentialData clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
};

} // namespace webbind
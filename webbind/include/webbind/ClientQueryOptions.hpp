#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ClientQueryOptions
class ClientQueryOptions : public emlite::Val {
  explicit ClientQueryOptions(Handle h) noexcept;
public:
    static ClientQueryOptions take_ownership(Handle h) noexcept;
    explicit ClientQueryOptions(const emlite::Val &val) noexcept;
    ClientQueryOptions() noexcept;
    [[nodiscard]] ClientQueryOptions clone() const noexcept;
    /// Getter of the `includeUncontrolled` attribute.
    [[nodiscard]] bool includeUncontrolled() const;
    /// Setter of the `includeUncontrolled` attribute.
    void includeUncontrolled(bool value);
    /// Getter of the `type` attribute.
    [[nodiscard]] ClientType type() const;
    /// Setter of the `type` attribute.
    void type(const ClientType& value);
};

} // namespace webbind
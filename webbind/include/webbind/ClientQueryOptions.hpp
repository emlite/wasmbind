#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ClientQueryOptions
/// [`ClientQueryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ClientQueryOptions)
class ClientQueryOptions : public emlite::Val {
  explicit ClientQueryOptions(Handle h) noexcept;
public:
    static ClientQueryOptions take_ownership(Handle h) noexcept;
    explicit ClientQueryOptions(const emlite::Val &val) noexcept;
    ClientQueryOptions() noexcept;
    [[nodiscard]] ClientQueryOptions clone() const noexcept;
    [[nodiscard]] bool includeUncontrolled() const;
    void includeUncontrolled(bool value);
    [[nodiscard]] ClientType type() const;
    void type(const ClientType& value);
};

} // namespace webbind
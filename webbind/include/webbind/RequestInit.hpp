#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RequestInit
class RequestInit : public emlite::Val {
  explicit RequestInit(Handle h) noexcept;
public:
    static RequestInit take_ownership(Handle h) noexcept;
    explicit RequestInit(const emlite::Val &val) noexcept;
    RequestInit() noexcept;
    [[nodiscard]] RequestInit clone() const noexcept;
    /// Getter of the `adAuctionHeaders` attribute.
    [[nodiscard]] bool adAuctionHeaders() const;
    /// Setter of the `adAuctionHeaders` attribute.
    void adAuctionHeaders(bool value);
};

} // namespace webbind
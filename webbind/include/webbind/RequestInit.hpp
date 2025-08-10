#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RequestInit
/// [`RequestInit`](https://developer.mozilla.org/en-US/docs/Web/API/RequestInit)
class RequestInit : public emlite::Val {
  explicit RequestInit(Handle h) noexcept;
public:
    static RequestInit take_ownership(Handle h) noexcept;
    explicit RequestInit(const emlite::Val &val) noexcept;
    RequestInit() noexcept;
    [[nodiscard]] RequestInit clone() const noexcept;
    [[nodiscard]] bool adAuctionHeaders() const;
    void adAuctionHeaders(bool value);
};

} // namespace webbind
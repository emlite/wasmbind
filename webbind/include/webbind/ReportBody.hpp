#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ReportBody
/// [`ReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/ReportBody)
class ReportBody : public emlite::Val {
  explicit ReportBody(Handle h) noexcept;
public:
    static ReportBody take_ownership(Handle h) noexcept;
    explicit ReportBody(const emlite::Val &val) noexcept;
    ReportBody() noexcept;
    [[nodiscard]] ReportBody clone() const noexcept;
};

} // namespace webbind
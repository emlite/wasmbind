#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueryOptions
/// [`QueryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/QueryOptions)
class QueryOptions : public emlite::Val {
  explicit QueryOptions(Handle h) noexcept;
public:
    static QueryOptions take_ownership(Handle h) noexcept;
    explicit QueryOptions(const emlite::Val &val) noexcept;
    QueryOptions() noexcept;
    [[nodiscard]] QueryOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> postscriptNames() const;
    void postscriptNames(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind
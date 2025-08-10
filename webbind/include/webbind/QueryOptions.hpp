#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueryOptions
class QueryOptions : public emlite::Val {
  explicit QueryOptions(Handle h) noexcept;
public:
    static QueryOptions take_ownership(Handle h) noexcept;
    explicit QueryOptions(const emlite::Val &val) noexcept;
    QueryOptions() noexcept;
    [[nodiscard]] QueryOptions clone() const noexcept;
    /// Getter of the `postscriptNames` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> postscriptNames() const;
    /// Setter of the `postscriptNames` attribute.
    void postscriptNames(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind
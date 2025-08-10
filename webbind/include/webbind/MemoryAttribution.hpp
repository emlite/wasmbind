#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryAttributionContainer.hpp"

namespace webbind {

/// Dictionary type MemoryAttribution
/// [`MemoryAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/MemoryAttribution)
class MemoryAttribution : public emlite::Val {
  explicit MemoryAttribution(Handle h) noexcept;
public:
    static MemoryAttribution take_ownership(Handle h) noexcept;
    explicit MemoryAttribution(const emlite::Val &val) noexcept;
    MemoryAttribution() noexcept;
    [[nodiscard]] MemoryAttribution clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] MemoryAttributionContainer container() const;
    void container(const MemoryAttributionContainer& value);
    [[nodiscard]] jsbind::String scope() const;
    void scope(const jsbind::String& value);
};

} // namespace webbind
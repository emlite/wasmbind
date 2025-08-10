#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type UnderlyingSink
/// [`UnderlyingSink`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlyingSink)
class UnderlyingSink : public emlite::Val {
  explicit UnderlyingSink(Handle h) noexcept;
public:
    static UnderlyingSink take_ownership(Handle h) noexcept;
    explicit UnderlyingSink(const emlite::Val &val) noexcept;
    UnderlyingSink() noexcept;
    [[nodiscard]] UnderlyingSink clone() const noexcept;
    [[nodiscard]] jsbind::Function start() const;
    void start(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function write() const;
    void write(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function close() const;
    void close(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function abort() const;
    void abort(const jsbind::Function& value);
    [[nodiscard]] jsbind::Any type() const;
    void type(const jsbind::Any& value);
};

} // namespace webbind
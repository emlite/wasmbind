#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Transformer
/// [`Transformer`](https://developer.mozilla.org/en-US/docs/Web/API/Transformer)
class Transformer : public emlite::Val {
  explicit Transformer(Handle h) noexcept;
public:
    static Transformer take_ownership(Handle h) noexcept;
    explicit Transformer(const emlite::Val &val) noexcept;
    Transformer() noexcept;
    [[nodiscard]] Transformer clone() const noexcept;
    [[nodiscard]] jsbind::Function start() const;
    void start(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function transform() const;
    void transform(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function flush() const;
    void flush(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function cancel() const;
    void cancel(const jsbind::Function& value);
    [[nodiscard]] jsbind::Any readableType() const;
    void readableType(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any writableType() const;
    void writableType(const jsbind::Any& value);
};

} // namespace webbind
#pragma once

#include "Promise.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {
class Response : public emlite::Val {
    explicit Response(Handle h) noexcept;

  public:
    static Response take_ownership(Handle h) noexcept;
    Response(const emlite::Val &val) noexcept;
    /* response.ok */
    [[nodiscard]] bool ok() const;

    /* response.status */
    [[nodiscard]] uint16_t status() const;

    /* response.headers   (raw; wrap later if you need) */
    [[nodiscard]] Any headers_raw() const;

    [[nodiscard]] Promise text() const;
    [[nodiscard]] Promise json() const;
    /* arrayBuffer() → we map to Uint8Array like Rust code
     */
    [[nodiscard]] Promise array_buffer() const;
};

/* fetch(char const* url [, init]) */
Promise fetch(const char *input);

Promise fetch(const char *input, const Any &init);

/* fetch_val(Any requestLike [, init]) */
Promise fetch_val(const Any &input);

Promise fetch_val(const Any &input, const Any &init);

} // namespace jsbind
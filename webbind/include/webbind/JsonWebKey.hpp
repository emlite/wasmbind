#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RsaOtherPrimesInfo.hpp"

namespace webbind {

/// Dictionary type JsonWebKey
/// [`JsonWebKey`](https://developer.mozilla.org/en-US/docs/Web/API/JsonWebKey)
class JsonWebKey : public emlite::Val {
  explicit JsonWebKey(Handle h) noexcept;
public:
    static JsonWebKey take_ownership(Handle h) noexcept;
    explicit JsonWebKey(const emlite::Val &val) noexcept;
    JsonWebKey() noexcept;
    [[nodiscard]] JsonWebKey clone() const noexcept;
    [[nodiscard]] jsbind::String kty() const;
    void kty(const jsbind::String& value);
    [[nodiscard]] jsbind::String use() const;
    void use(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> key_ops() const;
    void key_ops(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String alg() const;
    void alg(const jsbind::String& value);
    [[nodiscard]] bool ext() const;
    void ext(bool value);
    [[nodiscard]] jsbind::String crv() const;
    void crv(const jsbind::String& value);
    [[nodiscard]] jsbind::String x() const;
    void x(const jsbind::String& value);
    [[nodiscard]] jsbind::String y() const;
    void y(const jsbind::String& value);
    [[nodiscard]] jsbind::String d() const;
    void d(const jsbind::String& value);
    [[nodiscard]] jsbind::String n() const;
    void n(const jsbind::String& value);
    [[nodiscard]] jsbind::String e() const;
    void e(const jsbind::String& value);
    [[nodiscard]] jsbind::String p() const;
    void p(const jsbind::String& value);
    [[nodiscard]] jsbind::String q() const;
    void q(const jsbind::String& value);
    [[nodiscard]] jsbind::String dp() const;
    void dp(const jsbind::String& value);
    [[nodiscard]] jsbind::String dq() const;
    void dq(const jsbind::String& value);
    [[nodiscard]] jsbind::String qi() const;
    void qi(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<RsaOtherPrimesInfo> oth() const;
    void oth(const jsbind::TypedArray<RsaOtherPrimesInfo>& value);
    [[nodiscard]] jsbind::String k() const;
    void k(const jsbind::String& value);
};

} // namespace webbind
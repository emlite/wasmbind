#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class URL;
class URLSearchParams;


class URL : public emlite::Val {
    explicit URL(Handle h) noexcept;

public:
    explicit URL(const emlite::Val &val) noexcept;
    static URL take_ownership(Handle h) noexcept;

    URL clone() const noexcept;
    URL(const jsbind::USVString& url, const jsbind::USVString& base);
    static URL parse(const jsbind::USVString& url, const jsbind::USVString& base);
    static bool canParse(const jsbind::USVString& url, const jsbind::USVString& base);
    jsbind::USVString href() const;
    void href(const jsbind::USVString& value);
    jsbind::USVString origin() const;
    jsbind::USVString protocol() const;
    void protocol(const jsbind::USVString& value);
    jsbind::USVString username() const;
    void username(const jsbind::USVString& value);
    jsbind::USVString password() const;
    void password(const jsbind::USVString& value);
    jsbind::USVString host() const;
    void host(const jsbind::USVString& value);
    jsbind::USVString hostname() const;
    void hostname(const jsbind::USVString& value);
    jsbind::USVString port() const;
    void port(const jsbind::USVString& value);
    jsbind::USVString pathname() const;
    void pathname(const jsbind::USVString& value);
    jsbind::USVString search() const;
    void search(const jsbind::USVString& value);
    URLSearchParams searchParams() const;
    jsbind::USVString hash() const;
    void hash(const jsbind::USVString& value);
    jsbind::USVString toJSON();
    static jsbind::DOMString createObjectURL(const jsbind::Any& obj);
    static jsbind::Undefined revokeObjectURL(const jsbind::DOMString& url);
};


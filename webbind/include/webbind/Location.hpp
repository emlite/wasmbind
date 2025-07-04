#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMStringList;


class Location : public emlite::Val {
    explicit Location(Handle h) noexcept;

public:
    explicit Location(const emlite::Val &val) noexcept;
    static Location take_ownership(Handle h) noexcept;

    Location clone() const noexcept;
    jsbind::USVString href() const;
    void href(const jsbind::USVString& value);
    jsbind::USVString origin() const;
    jsbind::USVString protocol() const;
    void protocol(const jsbind::USVString& value);
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
    jsbind::USVString hash() const;
    void hash(const jsbind::USVString& value);
    jsbind::Undefined assign(const jsbind::USVString& url);
    jsbind::Undefined replace(const jsbind::USVString& url);
    jsbind::Undefined reload();
    DOMStringList ancestorOrigins() const;
};


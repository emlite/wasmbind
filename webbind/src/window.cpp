#include <webbind/Window.hpp>
#include <webbind/window.hpp>
#include <webbind/CacheStorage.hpp>
#include <webbind/Crypto.hpp>
#include <webbind/IDBFactory.hpp>
#include <webbind/Performance.hpp>
#include <webbind/ImageBitmap.hpp>
#include <emlite/emlite.hpp>

namespace webbind {

Window window() {
    return emlite::Val::global("window").as<Window>();
}

CacheStorage caches() { return CacheStorage(emlite::Val::global("caches")); }

bool crossOriginIsolated() { return emlite::Val::global("crossOriginIsolated").as<bool>(); }

Crypto crypto() { return Crypto(emlite::Val::global("crypto")); }

IDBFactory indexedDB() { return IDBFactory(emlite::Val::global("indexedDB")); }

bool isSecureContext() { return emlite::Val::global("isSecureContext").as<bool>(); }

jsbind::String origin() { return emlite::Val::global("origin").as<jsbind::String>(); }

Performance performance() {
    return Performance(emlite::Val::global("performance"));
}

jsbind::Promise<jsbind::Result<ImageBitmap, jsbind::Error>> createImageBitmap(
    const jsbind::Any &image, const jsbind::Object &options
) {
    auto result = emlite::Val::global("createImageBitmap")(image, options);
    return jsbind::Promise<jsbind::Result<ImageBitmap, jsbind::Error>>(result);
}

jsbind::Promise<jsbind::Result<ImageBitmap, jsbind::Error>> createImageBitmap(
    const jsbind::Any &image,
    double sx,
    double sy,
    double sw,
    double sh,
    const jsbind::Object &options
) {
    auto result = emlite::Val::global("createImageBitmap")(
        image, emlite::Val(sx), emlite::Val(sy), emlite::Val(sw), emlite::Val(sh), options
    );
    return jsbind::Promise<jsbind::Result<ImageBitmap, jsbind::Error>>(result);
}

void reportError(const jsbind::Error &error) { emlite::Val::global("reportError")(error); }
}

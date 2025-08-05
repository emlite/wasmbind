#pragma once

#include <jsbind/jsbind.hpp>
#include "MessagePort.hpp"

class Window;
class CacheStorage;
class Crypto;
class IDBFactory;
class Performance;
class ImageBitmap;

using jsbind::parseInt;
using jsbind::parseFloat;
using jsbind::atob;
using jsbind::btoa;
using jsbind::isNaN;
using jsbind::queueMicrotask;

/// Get the global Window object
Window window();

/// Reports an error to the global error handler
/// @param error the error to report
void reportError(const jsbind::Error& error);


/// Gets the global caches property
/// @returns CacheStorage interface for script-managed caches
CacheStorage caches();

/// Gets the global crossOriginIsolated property  
/// @returns boolean indicating if context is cross-origin isolated
bool crossOriginIsolated();

/// Gets the global crypto property
/// @returns Crypto interface for cryptographic functionality
Crypto crypto();

/// Gets the global indexedDB property
/// @returns IDBFactory interface for IndexedDB access
IDBFactory indexedDB();

/// Gets the global isSecureContext property
/// @returns boolean indicating if context is secure (HTTPS)
bool isSecureContext();

/// Gets the global origin property
/// @returns string containing the origin of the current context
jsbind::String origin();

/// Gets the global performance property
/// @returns Performance interface for performance measurement
Performance performance();

/// Creates an ImageBitmap from an image source
/// @param image the image source to create bitmap from
/// @param options optional ImageBitmap creation options
/// @returns Promise resolving to ImageBitmap
jsbind::Promise<ImageBitmap> createImageBitmap(const jsbind::Any& image, const jsbind::Object& options = jsbind::Object());

/// Creates an ImageBitmap from an image source with crop rectangle
/// @param image the image source to create bitmap from  
/// @param sx x coordinate of crop rectangle
/// @param sy y coordinate of crop rectangle
/// @param sw width of crop rectangle
/// @param sh height of crop rectangle
/// @param options optional ImageBitmap creation options
/// @returns Promise resolving to ImageBitmap
jsbind::Promise<ImageBitmap> createImageBitmap(const jsbind::Any& image, double sx, double sy, double sw, double sh, const jsbind::Object& options = jsbind::Object());

/// Performs a structured clone of a value
/// @param value the value to clone
/// @param options optional structured clone options
/// @returns deep clone of the input value
template <typename T>
T structuredClone(const T& value, const StructuredSerializeOptions& options = StructuredSerializeOptions()) {
    return emlite::Val::global("structuredClone")(value, options).template as<T>();
}

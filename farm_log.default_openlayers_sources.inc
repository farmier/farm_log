<?php
/**
 * @file
 * farm_log.default_openlayers_sources.inc
 */

/**
 * Implements hook_default_openlayers_sources().
 */
function farm_log_default_openlayers_sources() {
  $export = array();

  // Load all available farm asset types.
  $asset_types = farm_asset_types();

  // Iterate through the available types, and add a source for each one.
  foreach ($asset_types as $key => $type) {

    // Generate a machine name for the full geometry source.
    $full_source_name = 'farm_asset_full_source_' . $key;

    // Build the full geometry source.
    $ol_source = new stdClass();
    $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
    $ol_source->api_version = 1;
    $ol_source->machine_name = $full_source_name;
    $ol_source->name = 'Farm Assets: ' . $type->label . ' (full geometry)';
    $ol_source->description = 'This source is automatically generated by the Farm Log module.';
    $ol_source->factory_service = 'openlayers.Source:GeoJSON';
    $ol_source->options = array(
      'url' => 'farm/assets/geojson/full/' . $key,
      'useBBOX' => 0,
      'paramForwarding' => 1,
      'reloadOnZoomChange' => 0,
      'reloadOnExtentChange' => 0,
      'geojson_data' => '',
    );
    $export[$full_source_name] = $ol_source;

    // Generate a machine name for the lat/lon source.
    $centroid_source_name = 'farm_asset_latlon_source_' . $key;

    // Build the lat/lon source.
    $ol_source = new stdClass();
    $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
    $ol_source->api_version = 1;
    $ol_source->machine_name = $centroid_source_name;
    $ol_source->name = 'Farm Assets: ' . $type->label . ' (lat/lon)';
    $ol_source->description = 'This source is automatically generated by the Farm Log module.';
    $ol_source->factory_service = 'openlayers.Source:GeoJSON';
    $ol_source->options = array(
      'url' => 'farm/assets/geojson/latlon/' . $key,
      'useBBOX' => 0,
      'paramForwarding' => 1,
      'reloadOnZoomChange' => 0,
      'reloadOnExtentChange' => 0,
      'geojson_data' => '',
    );
    $export[$centroid_source_name] = $ol_source;
  }

  return $export;
}
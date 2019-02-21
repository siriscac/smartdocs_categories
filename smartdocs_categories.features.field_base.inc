<?php
/**
 * @file
 * smartdocs_categories.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function smartdocs_categories_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_model_category'.
  $field_bases['field_model_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_model_category',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'smartdocs_models_categories',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => '_taxonomy_access_term_options',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_model_image'.
  $field_bases['field_model_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_model_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 70,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}

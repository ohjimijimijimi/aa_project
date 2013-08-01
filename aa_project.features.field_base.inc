<?php
/**
 * @file
 * aa_project.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function aa_project_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_images'
  $field_bases['field_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_images',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_preview_caption'
  $field_bases['field_preview_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_preview_caption',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_preview_enable'
  $field_bases['field_preview_enable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_preview_enable',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_preview_image'
  $field_bases['field_preview_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_preview_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_preview_title'
  $field_bases['field_preview_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_preview_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_roles'
  $field_bases['field_roles'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_roles',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
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
          'vocabulary' => 'roles',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_upcoming_caption'
  $field_bases['field_upcoming_caption'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_caption',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_upcoming_date'
  $field_bases['field_upcoming_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_upcoming_enable'
  $field_bases['field_upcoming_enable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_enable',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_upcoming_link'
  $field_bases['field_upcoming_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_upcoming_title'
  $field_bases['field_upcoming_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_videos'
  $field_bases['field_videos'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_videos',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_years'
  $field_bases['field_years'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_years',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
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
          'vocabulary' => 'years',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
